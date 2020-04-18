
# surbayes

<!-- badges: start -->
<!-- badges: end -->

The goal of surbayes is to provide Bayesian SUR analysis quickly. The package has direct Monte Carlo implementation, which is much faster than Gibbs sampling. It also allows for the analysis of SUR models using power priors via Gibbs sampling.

## Installation

You can install the released version of surbayes from [CRAN](https://CRAN.R-project.org) with:

``` r
install.packages("surbayes")
```

## Example

Below are two examples on how to sample from the posterior. The first run of `sur_sample` uses direct Monte Carlo, and the second run uses Gibbs since a historical data set is provided. See `help(sur_sample)` for details.

``` r
## Taken from bayesm package
M = 10
set.seed(66)
## simulate data from SUR
beta1 = c(1,2)
beta2 = c(1,-1,-2)
nobs = 100
nreg = 2
iota = c(rep(1, nobs))
X1 = cbind(iota, runif(nobs))
X2 = cbind(iota, runif(nobs), runif(nobs))
Sigma = matrix(c(0.5, 0.2, 0.2, 0.5), ncol = 2)
U = chol(Sigma)
E = matrix( rnorm( 2 * nobs ), ncol = 2) %*% U
y1 = X1 %*% beta1 + E[,1]
y2 = X2 %*% beta2 + E[,2]
X1 = X1[, -1]
X2 = X2[, -1]
data = data.frame(y1, y2, X1, X2)
names(data) = c( paste0( 'y', 1:2 ), paste0('x', 1:(ncol(data) - 2) ))
## run DMC sampler
formula.list = list(y1 ~ x1, y2 ~ x2 + x3)

## Fit models
out_dmc = sur_sample( formula.list, data, M = M )            ## DMC--no power prior
out_powerprior = sur_sample( formula.list, data, M, data )   ## Gibbs--power prior
```

