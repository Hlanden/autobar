"use client";
import { createTheme } from "@mui/material/styles";
import { Audiowide, Exo_2 } from "next/font/google";

const audiowind = Audiowide({
  weight: ["400"],
  subsets: ["latin"],
  display: "swap",
});

const exo2 = Exo_2({
  weight: ["300", "400", "500", "700"],
  subsets: ["latin"],
  display: "swap",
});

const theme = createTheme({
  colorSchemes: { light: true, dark: true },
  cssVariables: {
    colorSchemeSelector: "class",
  },
  palette: {
    primary: {
      main: "#4C662B",
      dark: "#B1D18A",
      light: "#4C662B",
    },
    secondary: {
      main: "#586249",
      dark: "#BFCBAD",
      light: "#586249",
    },
    error: {
      main: "#BA1A1A",
      dark: "#FFB4AB",
      light: "#BA1A1A",
    },
    warning: {
      main: "#F9A825",
    },
    info: {
      main: "#0288D1",
    },
    success: {
      main: "#388E3C",
    },
  },
  typography: {
    fontFamily: exo2.style.fontFamily, // Default font for text
    h1: {
      fontFamily: audiowind.style.fontFamily, // Font for titles
      fontWeight: 700,
      fontSize: "3rem",
      lineHeight: 1.5,
    },
    h2: {
      fontFamily: audiowind.style.fontFamily,
      fontWeight: 700,
      fontSize: "2.5rem",
      lineHeight: 1.5,
    },
  },
});

export default theme;
