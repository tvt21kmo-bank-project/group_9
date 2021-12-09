var express = require('express');
var path = require('path');
var cookieParser = require('cookie-parser');
var logger = require('morgan');
const helmet = require('helmet');
const cors = require('cors');

var userRouter = require('./routes/user');
var borrowerRouter = require('./routes/borrower');
var saldoRouter = require('./routes/saldo');
var bankRouter = require('./routes/bank');
var loginRouter = require('./routes/login');

var app = express();

app.use(helmet());
app.use(cors());

app.use(logger('dev'));
app.use(express.json());
app.use(express.urlencoded({ extended: false }));
app.use(cookieParser());
app.use(express.static(path.join(__dirname, 'public')));

app.use('/login', loginRouter);
app.use('/user', userRouter);
app.use('/borrower', borrowerRouter);
app.use('/saldo', saldoRouter);
app.use('/bank', bankRouter);
module.exports = app;



