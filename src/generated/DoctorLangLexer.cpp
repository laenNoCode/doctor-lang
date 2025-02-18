
// Generated from DoctorLang.g4 by ANTLR 4.13.2


#include "DoctorLangLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct DoctorLangLexerStaticData final {
  DoctorLangLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  DoctorLangLexerStaticData(const DoctorLangLexerStaticData&) = delete;
  DoctorLangLexerStaticData(DoctorLangLexerStaticData&&) = delete;
  DoctorLangLexerStaticData& operator=(const DoctorLangLexerStaticData&) = delete;
  DoctorLangLexerStaticData& operator=(DoctorLangLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag doctorlanglexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<DoctorLangLexerStaticData> doctorlanglexerLexerStaticData = nullptr;

void doctorlanglexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (doctorlanglexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(doctorlanglexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<DoctorLangLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "T__2", "WORD", "ENDSTATEMENT", "COMMA", "SPACE", 
      "NEWLINE"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "':'", "'('", "')'", "", "';'", "','"
    },
    std::vector<std::string>{
      "", "", "", "", "WORD", "ENDSTATEMENT", "COMMA", "SPACE", "NEWLINE"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,8,48,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,
  	2,7,7,7,1,0,1,0,1,1,1,1,1,2,1,2,1,3,1,3,5,3,26,8,3,10,3,12,3,29,9,3,1,
  	4,1,4,1,5,1,5,1,6,4,6,36,8,6,11,6,12,6,37,1,7,3,7,41,8,7,1,7,1,7,4,7,
  	45,8,7,11,7,12,7,46,0,0,8,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,1,0,3,3,
  	0,65,90,95,95,97,122,4,0,48,57,65,90,95,95,97,122,3,0,9,10,13,13,32,32,
  	52,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,
  	0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,1,17,1,0,0,0,3,19,1,0,0,0,5,21,1,0,0,
  	0,7,23,1,0,0,0,9,30,1,0,0,0,11,32,1,0,0,0,13,35,1,0,0,0,15,44,1,0,0,0,
  	17,18,5,58,0,0,18,2,1,0,0,0,19,20,5,40,0,0,20,4,1,0,0,0,21,22,5,41,0,
  	0,22,6,1,0,0,0,23,27,7,0,0,0,24,26,7,1,0,0,25,24,1,0,0,0,26,29,1,0,0,
  	0,27,25,1,0,0,0,27,28,1,0,0,0,28,8,1,0,0,0,29,27,1,0,0,0,30,31,5,59,0,
  	0,31,10,1,0,0,0,32,33,5,44,0,0,33,12,1,0,0,0,34,36,7,2,0,0,35,34,1,0,
  	0,0,36,37,1,0,0,0,37,35,1,0,0,0,37,38,1,0,0,0,38,14,1,0,0,0,39,41,5,13,
  	0,0,40,39,1,0,0,0,40,41,1,0,0,0,41,42,1,0,0,0,42,45,5,10,0,0,43,45,5,
  	13,0,0,44,40,1,0,0,0,44,43,1,0,0,0,45,46,1,0,0,0,46,44,1,0,0,0,46,47,
  	1,0,0,0,47,16,1,0,0,0,6,0,27,37,40,44,46,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  doctorlanglexerLexerStaticData = std::move(staticData);
}

}

DoctorLangLexer::DoctorLangLexer(CharStream *input) : Lexer(input) {
  DoctorLangLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *doctorlanglexerLexerStaticData->atn, doctorlanglexerLexerStaticData->decisionToDFA, doctorlanglexerLexerStaticData->sharedContextCache);
}

DoctorLangLexer::~DoctorLangLexer() {
  delete _interpreter;
}

std::string DoctorLangLexer::getGrammarFileName() const {
  return "DoctorLang.g4";
}

const std::vector<std::string>& DoctorLangLexer::getRuleNames() const {
  return doctorlanglexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& DoctorLangLexer::getChannelNames() const {
  return doctorlanglexerLexerStaticData->channelNames;
}

const std::vector<std::string>& DoctorLangLexer::getModeNames() const {
  return doctorlanglexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& DoctorLangLexer::getVocabulary() const {
  return doctorlanglexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView DoctorLangLexer::getSerializedATN() const {
  return doctorlanglexerLexerStaticData->serializedATN;
}

const atn::ATN& DoctorLangLexer::getATN() const {
  return *doctorlanglexerLexerStaticData->atn;
}




void DoctorLangLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  doctorlanglexerLexerInitialize();
#else
  ::antlr4::internal::call_once(doctorlanglexerLexerOnceFlag, doctorlanglexerLexerInitialize);
#endif
}
