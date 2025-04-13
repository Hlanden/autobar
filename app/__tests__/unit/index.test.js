import '@testing-library/jest-dom'
import { render, screen } from '@testing-library/react'
import Home from '../../src/app/page'
 
describe('Home page', () => {
  it('renders a heading saying "Hello World"', () => {
    render(<Home />)
 
    const heading = screen.getByRole('heading', { level: 1 })
 
    expect(heading).toBeInTheDocument()
    expect(heading.textContent).toBe("Autobar")
  })
})
