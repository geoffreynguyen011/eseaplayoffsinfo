import React from 'react'
import Intro from './Intro'

class ESEA extends React.Component {
    
    constructor() {
        super()
        this.state = {
            numWins: '',
            division: ''
        }
        
        this.handleChange = this.handleChange.bind(this)
    }
    
    handleChange(event) {
        const {name, value} = event.target
        this.setState({ 
            [name]: value
        })
    }
    
  render() {
    return (
      <main>
        <form>
            <label>
                <select
                    type='text'
                    name='numWins'
                    value={this.state.numWins}
                    onChange={this.handleChange}
                >
                    <option value='0'>0</option>
                    <option value='1'>1</option>
                    <option value='2'>2</option>
                    <option value='3'>3</option>
                    <option value='4'>4</option>
                    <option value='5'>5</option>
                    <option value='6'>6</option>
                    <option value='7'>7</option>
                    <option value='8'>8</option>
                    <option value='9'>9</option>
                    <option value='10'>10</option>
                    <option value='11'>11</option>
                    <option value='12'>12</option>
                    <option value='13'>13</option>
                    <option value='14'>14</option>
                    <option value='15'>15</option>
                    <option value='16'>16</option>
                </select>
                
                <br />
                
                <select 
                    type='text'
                    value={this.state.division}
                    onChange={this.handleChange}
                    name='division'
                >
                    <option value='open'>Open</option>
                    <option value='intermediate'>Intermediate</option>
                    <option value='main'>Main</option>
                    <option value='advanced'>Advanced</option>
                    <option value='mdl'>MDL</option>
                </select>
                <br />
            </label>
        </form>
      </main>
    );
  }
}

export default ESEA
