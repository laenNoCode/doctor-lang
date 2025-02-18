
// Generated from DoctorLang.g4 by ANTLR 4.13.2


#include "DoctorLangVisitor.h"

#include "DoctorLangParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct DoctorLangParserStaticData final {
  DoctorLangParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  DoctorLangParserStaticData(const DoctorLangParserStaticData&) = delete;
  DoctorLangParserStaticData(DoctorLangParserStaticData&&) = delete;
  DoctorLangParserStaticData& operator=(const DoctorLangParserStaticData&) = delete;
  DoctorLangParserStaticData& operator=(DoctorLangParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag doctorlangParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<DoctorLangParserStaticData> doctorlangParserStaticData = nullptr;

void doctorlangParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (doctorlangParserStaticData != nullptr) {
    return;
  }
#else
  assert(doctorlangParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<DoctorLangParserStaticData>(
    std::vector<std::string>{
      "file", "line", "type", "variable", "function", "fd"
    },
    std::vector<std::string>{
      "", "':'", "'('", "')'", "", "';'", "','"
    },
    std::vector<std::string>{
      "", "", "", "", "WORD", "ENDSTATEMENT", "COMMA", "SPACE", "NEWLINE"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,8,86,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,1,0,5,0,14,8,
  	0,10,0,12,0,17,9,0,1,1,1,1,5,1,21,8,1,10,1,12,1,24,9,1,1,1,5,1,27,8,1,
  	10,1,12,1,30,9,1,1,2,1,2,1,3,1,3,5,3,36,8,3,10,3,12,3,39,9,3,1,3,1,3,
  	5,3,43,8,3,10,3,12,3,46,9,3,1,3,3,3,49,8,3,1,4,1,4,5,4,53,8,4,10,4,12,
  	4,56,9,4,1,4,1,4,3,4,60,8,4,1,4,5,4,63,8,4,10,4,12,4,66,9,4,1,4,1,4,5,
  	4,70,8,4,10,4,12,4,73,9,4,1,4,5,4,76,8,4,10,4,12,4,79,9,4,1,4,1,4,1,5,
  	1,5,1,5,1,5,0,0,6,0,2,4,6,8,10,0,0,90,0,15,1,0,0,0,2,18,1,0,0,0,4,31,
  	1,0,0,0,6,33,1,0,0,0,8,50,1,0,0,0,10,82,1,0,0,0,12,14,3,2,1,0,13,12,1,
  	0,0,0,14,17,1,0,0,0,15,13,1,0,0,0,15,16,1,0,0,0,16,1,1,0,0,0,17,15,1,
  	0,0,0,18,22,3,10,5,0,19,21,5,7,0,0,20,19,1,0,0,0,21,24,1,0,0,0,22,20,
  	1,0,0,0,22,23,1,0,0,0,23,28,1,0,0,0,24,22,1,0,0,0,25,27,5,8,0,0,26,25,
  	1,0,0,0,27,30,1,0,0,0,28,26,1,0,0,0,28,29,1,0,0,0,29,3,1,0,0,0,30,28,
  	1,0,0,0,31,32,5,4,0,0,32,5,1,0,0,0,33,48,5,4,0,0,34,36,5,7,0,0,35,34,
  	1,0,0,0,36,39,1,0,0,0,37,35,1,0,0,0,37,38,1,0,0,0,38,40,1,0,0,0,39,37,
  	1,0,0,0,40,44,5,1,0,0,41,43,5,7,0,0,42,41,1,0,0,0,43,46,1,0,0,0,44,42,
  	1,0,0,0,44,45,1,0,0,0,45,47,1,0,0,0,46,44,1,0,0,0,47,49,3,4,2,0,48,37,
  	1,0,0,0,48,49,1,0,0,0,49,7,1,0,0,0,50,54,3,6,3,0,51,53,5,7,0,0,52,51,
  	1,0,0,0,53,56,1,0,0,0,54,52,1,0,0,0,54,55,1,0,0,0,55,57,1,0,0,0,56,54,
  	1,0,0,0,57,59,5,2,0,0,58,60,3,6,3,0,59,58,1,0,0,0,59,60,1,0,0,0,60,64,
  	1,0,0,0,61,63,5,7,0,0,62,61,1,0,0,0,63,66,1,0,0,0,64,62,1,0,0,0,64,65,
  	1,0,0,0,65,77,1,0,0,0,66,64,1,0,0,0,67,71,5,6,0,0,68,70,5,7,0,0,69,68,
  	1,0,0,0,70,73,1,0,0,0,71,69,1,0,0,0,71,72,1,0,0,0,72,74,1,0,0,0,73,71,
  	1,0,0,0,74,76,3,6,3,0,75,67,1,0,0,0,76,79,1,0,0,0,77,75,1,0,0,0,77,78,
  	1,0,0,0,78,80,1,0,0,0,79,77,1,0,0,0,80,81,5,3,0,0,81,9,1,0,0,0,82,83,
  	3,8,4,0,83,84,5,5,0,0,84,11,1,0,0,0,11,15,22,28,37,44,48,54,59,64,71,
  	77
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  doctorlangParserStaticData = std::move(staticData);
}

}

DoctorLangParser::DoctorLangParser(TokenStream *input) : DoctorLangParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

DoctorLangParser::DoctorLangParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  DoctorLangParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *doctorlangParserStaticData->atn, doctorlangParserStaticData->decisionToDFA, doctorlangParserStaticData->sharedContextCache, options);
}

DoctorLangParser::~DoctorLangParser() {
  delete _interpreter;
}

const atn::ATN& DoctorLangParser::getATN() const {
  return *doctorlangParserStaticData->atn;
}

std::string DoctorLangParser::getGrammarFileName() const {
  return "DoctorLang.g4";
}

const std::vector<std::string>& DoctorLangParser::getRuleNames() const {
  return doctorlangParserStaticData->ruleNames;
}

const dfa::Vocabulary& DoctorLangParser::getVocabulary() const {
  return doctorlangParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView DoctorLangParser::getSerializedATN() const {
  return doctorlangParserStaticData->serializedATN;
}


//----------------- FileContext ------------------------------------------------------------------

DoctorLangParser::FileContext::FileContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<DoctorLangParser::LineContext *> DoctorLangParser::FileContext::line() {
  return getRuleContexts<DoctorLangParser::LineContext>();
}

DoctorLangParser::LineContext* DoctorLangParser::FileContext::line(size_t i) {
  return getRuleContext<DoctorLangParser::LineContext>(i);
}


size_t DoctorLangParser::FileContext::getRuleIndex() const {
  return DoctorLangParser::RuleFile;
}


std::any DoctorLangParser::FileContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DoctorLangVisitor*>(visitor))
    return parserVisitor->visitFile(this);
  else
    return visitor->visitChildren(this);
}

DoctorLangParser::FileContext* DoctorLangParser::file() {
  FileContext *_localctx = _tracker.createInstance<FileContext>(_ctx, getState());
  enterRule(_localctx, 0, DoctorLangParser::RuleFile);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(15);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DoctorLangParser::WORD) {
      setState(12);
      antlrcpp::downCast<FileContext *>(_localctx)->lineContext = line();
      antlrcpp::downCast<FileContext *>(_localctx)->lines.push_back(antlrcpp::downCast<FileContext *>(_localctx)->lineContext);
      setState(17);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LineContext ------------------------------------------------------------------

DoctorLangParser::LineContext::LineContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

DoctorLangParser::FdContext* DoctorLangParser::LineContext::fd() {
  return getRuleContext<DoctorLangParser::FdContext>(0);
}

std::vector<tree::TerminalNode *> DoctorLangParser::LineContext::SPACE() {
  return getTokens(DoctorLangParser::SPACE);
}

tree::TerminalNode* DoctorLangParser::LineContext::SPACE(size_t i) {
  return getToken(DoctorLangParser::SPACE, i);
}

std::vector<tree::TerminalNode *> DoctorLangParser::LineContext::NEWLINE() {
  return getTokens(DoctorLangParser::NEWLINE);
}

tree::TerminalNode* DoctorLangParser::LineContext::NEWLINE(size_t i) {
  return getToken(DoctorLangParser::NEWLINE, i);
}


size_t DoctorLangParser::LineContext::getRuleIndex() const {
  return DoctorLangParser::RuleLine;
}


std::any DoctorLangParser::LineContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DoctorLangVisitor*>(visitor))
    return parserVisitor->visitLine(this);
  else
    return visitor->visitChildren(this);
}

DoctorLangParser::LineContext* DoctorLangParser::line() {
  LineContext *_localctx = _tracker.createInstance<LineContext>(_ctx, getState());
  enterRule(_localctx, 2, DoctorLangParser::RuleLine);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(18);
    fd();
    setState(22);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DoctorLangParser::SPACE) {
      setState(19);
      match(DoctorLangParser::SPACE);
      setState(24);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(28);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DoctorLangParser::NEWLINE) {
      setState(25);
      match(DoctorLangParser::NEWLINE);
      setState(30);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeContext ------------------------------------------------------------------

DoctorLangParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DoctorLangParser::TypeContext::WORD() {
  return getToken(DoctorLangParser::WORD, 0);
}


size_t DoctorLangParser::TypeContext::getRuleIndex() const {
  return DoctorLangParser::RuleType;
}


std::any DoctorLangParser::TypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DoctorLangVisitor*>(visitor))
    return parserVisitor->visitType(this);
  else
    return visitor->visitChildren(this);
}

DoctorLangParser::TypeContext* DoctorLangParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 4, DoctorLangParser::RuleType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(31);
    match(DoctorLangParser::WORD);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableContext ------------------------------------------------------------------

DoctorLangParser::VariableContext::VariableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DoctorLangParser::VariableContext::WORD() {
  return getToken(DoctorLangParser::WORD, 0);
}

DoctorLangParser::TypeContext* DoctorLangParser::VariableContext::type() {
  return getRuleContext<DoctorLangParser::TypeContext>(0);
}

std::vector<tree::TerminalNode *> DoctorLangParser::VariableContext::SPACE() {
  return getTokens(DoctorLangParser::SPACE);
}

tree::TerminalNode* DoctorLangParser::VariableContext::SPACE(size_t i) {
  return getToken(DoctorLangParser::SPACE, i);
}


size_t DoctorLangParser::VariableContext::getRuleIndex() const {
  return DoctorLangParser::RuleVariable;
}


std::any DoctorLangParser::VariableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DoctorLangVisitor*>(visitor))
    return parserVisitor->visitVariable(this);
  else
    return visitor->visitChildren(this);
}

DoctorLangParser::VariableContext* DoctorLangParser::variable() {
  VariableContext *_localctx = _tracker.createInstance<VariableContext>(_ctx, getState());
  enterRule(_localctx, 6, DoctorLangParser::RuleVariable);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(33);
    antlrcpp::downCast<VariableContext *>(_localctx)->name = match(DoctorLangParser::WORD);
    setState(48);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      setState(37);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == DoctorLangParser::SPACE) {
        setState(34);
        match(DoctorLangParser::SPACE);
        setState(39);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(40);
      match(DoctorLangParser::T__0);
      setState(44);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == DoctorLangParser::SPACE) {
        setState(41);
        match(DoctorLangParser::SPACE);
        setState(46);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(47);
      antlrcpp::downCast<VariableContext *>(_localctx)->typ = type();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionContext ------------------------------------------------------------------

DoctorLangParser::FunctionContext::FunctionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<DoctorLangParser::VariableContext *> DoctorLangParser::FunctionContext::variable() {
  return getRuleContexts<DoctorLangParser::VariableContext>();
}

DoctorLangParser::VariableContext* DoctorLangParser::FunctionContext::variable(size_t i) {
  return getRuleContext<DoctorLangParser::VariableContext>(i);
}

std::vector<tree::TerminalNode *> DoctorLangParser::FunctionContext::SPACE() {
  return getTokens(DoctorLangParser::SPACE);
}

tree::TerminalNode* DoctorLangParser::FunctionContext::SPACE(size_t i) {
  return getToken(DoctorLangParser::SPACE, i);
}

std::vector<tree::TerminalNode *> DoctorLangParser::FunctionContext::COMMA() {
  return getTokens(DoctorLangParser::COMMA);
}

tree::TerminalNode* DoctorLangParser::FunctionContext::COMMA(size_t i) {
  return getToken(DoctorLangParser::COMMA, i);
}


size_t DoctorLangParser::FunctionContext::getRuleIndex() const {
  return DoctorLangParser::RuleFunction;
}


std::any DoctorLangParser::FunctionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DoctorLangVisitor*>(visitor))
    return parserVisitor->visitFunction(this);
  else
    return visitor->visitChildren(this);
}

DoctorLangParser::FunctionContext* DoctorLangParser::function() {
  FunctionContext *_localctx = _tracker.createInstance<FunctionContext>(_ctx, getState());
  enterRule(_localctx, 8, DoctorLangParser::RuleFunction);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(50);
    antlrcpp::downCast<FunctionContext *>(_localctx)->var = variable();
    setState(54);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DoctorLangParser::SPACE) {
      setState(51);
      match(DoctorLangParser::SPACE);
      setState(56);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(57);
    match(DoctorLangParser::T__1);

    setState(59);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DoctorLangParser::WORD) {
      setState(58);
      antlrcpp::downCast<FunctionContext *>(_localctx)->variableContext = variable();
      antlrcpp::downCast<FunctionContext *>(_localctx)->params.push_back(antlrcpp::downCast<FunctionContext *>(_localctx)->variableContext);
    }
    setState(64);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DoctorLangParser::SPACE) {
      setState(61);
      match(DoctorLangParser::SPACE);
      setState(66);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(77);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DoctorLangParser::COMMA) {
      setState(67);
      match(DoctorLangParser::COMMA);
      setState(71);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == DoctorLangParser::SPACE) {
        setState(68);
        match(DoctorLangParser::SPACE);
        setState(73);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(74);
      antlrcpp::downCast<FunctionContext *>(_localctx)->variableContext = variable();
      antlrcpp::downCast<FunctionContext *>(_localctx)->params.push_back(antlrcpp::downCast<FunctionContext *>(_localctx)->variableContext);
      setState(79);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(80);
    match(DoctorLangParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FdContext ------------------------------------------------------------------

DoctorLangParser::FdContext::FdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

DoctorLangParser::FunctionContext* DoctorLangParser::FdContext::function() {
  return getRuleContext<DoctorLangParser::FunctionContext>(0);
}

tree::TerminalNode* DoctorLangParser::FdContext::ENDSTATEMENT() {
  return getToken(DoctorLangParser::ENDSTATEMENT, 0);
}


size_t DoctorLangParser::FdContext::getRuleIndex() const {
  return DoctorLangParser::RuleFd;
}


std::any DoctorLangParser::FdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DoctorLangVisitor*>(visitor))
    return parserVisitor->visitFd(this);
  else
    return visitor->visitChildren(this);
}

DoctorLangParser::FdContext* DoctorLangParser::fd() {
  FdContext *_localctx = _tracker.createInstance<FdContext>(_ctx, getState());
  enterRule(_localctx, 10, DoctorLangParser::RuleFd);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(82);
    function();
    setState(83);
    match(DoctorLangParser::ENDSTATEMENT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void DoctorLangParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  doctorlangParserInitialize();
#else
  ::antlr4::internal::call_once(doctorlangParserOnceFlag, doctorlangParserInitialize);
#endif
}
