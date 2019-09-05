* Version Check
<code>

    library(plotly)
    packageVersion('plotly')

</code>

* Basic 3D Surface Plot
<code>

    library(plotly)
    # volcano is a numeric matrix that ships with R
    p <- plot_ly(z = ~volcano) %>% add_surface()

    # Create a shareable link to your chart
    # Set up API credentials: https://plot.ly/r/getting-started
    chart_link = api_create(p, filename="surface-1")
    chart_link

</code>

* Surface Plot With Contours
<code>

    library(plotly)
    # volcano is a numeric matrix that ships with R
    p <- plot_ly(z = ~volcano) %>% add_surface(
      contours = list(
        z = list(
          show=TRUE,
          usecolormap=TRUE,
          highlightcolor="#ff0000",
          project=list(z=TRUE)
          )
        )
      ) %>%
      layout(
        scene = list(
          camera=list(
            eye = list(x=1.87, y=0.88, z=-0.64)
            )
          )
      )

    # Create a shareable link to your chart
    # Set up API credentials: https://plot.ly/r/getting-started
    chart_link = api_create(p, filename="surface-contours-1")
    chart_link

</code>

* 2D Kernel Density Estimation
<code>

    kd <- with(MASS::geyser, MASS::kde2d(duration, waiting, n = 50))
    p <- plot_ly(x = kd$x, y = kd$y, z = kd$z) %>% add_surface()

    # Create a shareable link to your chart
    # Set up API credentials: https://plot.ly/r/getting-started
    chart_link = api_create(p, filename="surface-2")
    chart_link

</code>

* Multiple Surfaces
<code>

    z <- c(
      c(8.83,8.89,8.81,8.87,8.9,8.87),
      c(8.89,8.94,8.85,8.94,8.96,8.92),
      c(8.84,8.9,8.82,8.92,8.93,8.91),
      c(8.79,8.85,8.79,8.9,8.94,8.92),
      c(8.79,8.88,8.81,8.9,8.95,8.92),
      c(8.8,8.82,8.78,8.91,8.94,8.92),
      c(8.75,8.78,8.77,8.91,8.95,8.92),
      c(8.8,8.8,8.77,8.91,8.95,8.94),
      c(8.74,8.81,8.76,8.93,8.98,8.99),
      c(8.89,8.99,8.92,9.1,9.13,9.11),
      c(8.97,8.97,8.91,9.09,9.11,9.11),
      c(9.04,9.08,9.05,9.25,9.28,9.27),
      c(9,9.01,9,9.2,9.23,9.2),
      c(8.99,8.99,8.98,9.18,9.2,9.19),
      c(8.93,8.97,8.97,9.18,9.2,9.18)
    )
    dim(z) <- c(15,6)
    z2 <- z + 1
    z3 <- z - 1

    p <- plot_ly(showscale = FALSE) %>%
      add_surface(z = ~z) %>%
      add_surface(z = ~z2, opacity = 0.98) %>%
      add_surface(z = ~z3, opacity = 0.98)

    # Create a shareable link to your chart
    # Set up API credentials: https://plot.ly/r/getting-started
    chart_link = api_create(p, filename="surface-3")
    chart_link

</code>
