const { Pool, Client } = require('pg')
const pool = new Pool({
  user: 'gonza',
  host: 'localhost',
  database: 'turnos',
  password: 'turnos',
})


pool.query('SELECT $1::text as message', ['Hello world!'], (err, res) => {
  console.log(err ? err.stack : res.rows[0].message) // Hello World!
  pool.end()
})
