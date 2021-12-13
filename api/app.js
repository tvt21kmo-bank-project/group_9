var express = require('express');
var path = require('path');
var cookieParser = require('cookie-parser');
var logger = require('morgan');
const helmet = require('helmet');
const cors = require('cors');
const dotenv = require('dotenv');

dotenv.config();
var app = express();

var userRouter = require('./routes/user');
var borrowerRouter = require('./routes/borrower');
var saldoRouter = require('./routes/saldo');
var bankRouter = require('./routes/bank');
var loginRouter = require('./routes/login');
var tapahtumatRouter = require('./routes/tapahtumat');

app.use(helmet());
app.use(cors());
const basicAuth = require('express-basic-auth');
app.use(basicAuth( { authorizer: myAuthorizer, authorizeAsync:true, } ))

function myAuthorizer(username, password, cb){
    if(username===process.env.authUser && password ===process.env.authPass){
        return cb(null, true);
    }
    else{
        return cb(null, false);
    }
}

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
app.use('/tapahtumat',tapahtumatRouter);
module.exports = app;



