# Responsive Design Tokens & Mobile-First CSS Architecture

This repository contains a modern, responsive web application dashboard layout built with vanilla CSS. It demonstrates best practices for mobile-first design, fluid breakpoints, and modern visual aesthetics using native CSS custom properties.

## Architecture & Implementation Details

1.  **Design Tokens (`:root`)**:
    *   Centralized management of color palettes, typography scales, spacing variables, and border-radii.
    *   Includes automatic **Dark/Light Theme** switching via `@media (prefers-color-scheme: dark)`.
2.  **Mobile-First Layout Engine**:
    *   **Base (320px+)**: The layout uses a 1-column Flexbox approach. Navigation elements scroll horizontally to prevent cramped vertical real estate. `overflow-x: hidden` is applied globally to prevent horizontal scrolling of the viewport.
    *   **Tablet (768px+)**: CSS Grid splits the layout into a fixed 250px sticky sidebar and a 2-column main content grid.
    *   **Desktop (1024px+)**: The grid expands to 3 columns, utilizing `grid-column: span X` for complex card placements (e.g., wide charts).
    *   **Ultra-Wide (1440px+)**: The layout sets a maximum width, centers itself, and scales typography slightly for better readability.
3.  **Modern Aesthetics**:
    *   **Glassmorphism**: Applied via a `.glass-panel` utility class leveraging `backdrop-filter: blur()`, semi-transparent `rgba` backgrounds, and subtle borders.
    *   **Hover States**: Implemented using optimized CSS transitions on `transform` and `box-shadow` properties for performant interactions.
