# Autobar App 

This is the autobar webapp. 
It provides a interface for the users to order drinks and see the status of the autobar. 
It is built using Next.js

## Getting Started

* Download a Node.js version higher than 18. 
    This project was built using version 22.
* Install all dependencies: `npm install`

Run the application in developer mode using: 
```
npm run dev
```

To run the unit test, use the following command: 
```
npm test
```

To run the end-to-end tests, use the following command:
```
npx playwright test
```

## Architecture

The app is built using **Next.js**.
**Material UI** is used a component library.
The project is configured to use **jest** for unit testing, and **playwright** for end-to-end testing. 

### Project Structure

The current top-level directory structure is summarized by the tree below: 
```
src
├── app
├── components
└── theme.ts
public
__mocks__
__tests__
├── e2e
└── unit
.github
```
In the root directory, you'll also find all configuration files used for the project.

Important directories: 
* `src/`: Contains the application source code. 
    * The pages are found under `src/app`. 
        The project uses app routing, which you can read more about in the [Next.js guide on project structure](https://nextjs.org/docs/app/getting-started/project-structure). 
    * `src/components/`: Contains components used to build the pages 
    * `src/theme.ts`: Theme definition for the Material UI components.
        This is the main entry-point for changing global styles of the website.
* `public/`: Contains public assets for the website 
* `__mocks__`: Contains mocks for jest tests. 
* `__tests__/unit/`: Unit tests written in jest 
* `__tests__/e2e/`: End-to-end tests written in playwright
* `.github`: Contains all scripts for github workflows.
