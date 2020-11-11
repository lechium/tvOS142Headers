/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:42 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TextInput/TextInput-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class TIKeyboardBehaviors, TIKeyboardCandidate, NSString, TIKeyEventMap, TICharacterSetDescription;

@interface TIKeyboardInputManagerState : NSObject <NSCopying, NSSecureCoding> {

	TIKeyboardBehaviors* _keyboardBehaviors;
	SCD_Union_TI7 _mask;
	BOOL _shouldAddModifierSymbolsToWordCharacters;
	TIKeyboardCandidate* _autocorrectionRecordForInputString;
	NSString* _wordSeparator;
	unsigned long long _inputCount;
	unsigned long long _inputIndex;
	NSString* _inputString;
	TIKeyEventMap* _keyEventMap;
	NSString* _replacementForDoubleSpace;
	NSString* _shadowTyping;
	unsigned long long _initialCandidateBatchCount;
	TICharacterSetDescription* _wordCharacters;
	TICharacterSetDescription* _shortcutCompletions;
	TICharacterSetDescription* _inputsPreventingAcceptSelectedCandidate;
	TICharacterSetDescription* _inputsToReject;
	TICharacterSetDescription* _terminatorsPreventingAutocorrection;
	TICharacterSetDescription* _terminatorsDeletingAutospace;
	NSString* _searchStringForMarkedText;

}

@property (assign,nonatomic) BOOL canHandleKeyHitTest; 
@property (assign,nonatomic) BOOL ignoresDeadKeys; 
@property (assign,nonatomic) BOOL shouldExtendPriorWord; 
@property (assign,nonatomic) BOOL suppliesCompletions; 
@property (assign,nonatomic) BOOL supportsSetPhraseBoundary; 
@property (assign,nonatomic) BOOL suppressCompletionsForFieldEditor; 
@property (assign,nonatomic) BOOL usesAutoDeleteWord; 
@property (assign,nonatomic) BOOL usesCandidateSelection; 
@property (assign,nonatomic) BOOL usesAutocorrectionLists; 
@property (assign,nonatomic) BOOL commitsAcceptedCandidate; 
@property (assign,nonatomic) BOOL newInputAcceptsUserSelectedCandidate; 
@property (assign,nonatomic) unsigned long long autoquoteType; 
@property (assign,nonatomic) BOOL usesContinuousPath; 
@property (assign,nonatomic) BOOL usesContinuousPathProgressiveCandidates; 
@property (assign,nonatomic) BOOL insertsSpaceAfterPredictiveInput; 
@property (assign,nonatomic) BOOL shouldFixupIncompleteRomaji; 
@property (nonatomic,copy) NSString * replacementForDoubleSpace;                                             //@synthesize replacementForDoubleSpace=_replacementForDoubleSpace - In the implementation block
@property (nonatomic,copy) NSString * wordSeparator;                                                         //@synthesize wordSeparator=_wordSeparator - In the implementation block
@property (assign,nonatomic) unsigned long long initialCandidateBatchCount;                                  //@synthesize initialCandidateBatchCount=_initialCandidateBatchCount - In the implementation block
@property (nonatomic,retain) TIKeyboardBehaviors * keyboardBehaviors;                                        //@synthesize keyboardBehaviors=_keyboardBehaviors - In the implementation block
@property (assign,nonatomic) BOOL shouldAddModifierSymbolsToWordCharacters;                                  //@synthesize shouldAddModifierSymbolsToWordCharacters=_shouldAddModifierSymbolsToWordCharacters - In the implementation block
@property (nonatomic,copy) TICharacterSetDescription * wordCharacters;                                       //@synthesize wordCharacters=_wordCharacters - In the implementation block
@property (nonatomic,copy) TICharacterSetDescription * shortcutCompletions;                                  //@synthesize shortcutCompletions=_shortcutCompletions - In the implementation block
@property (nonatomic,copy) TICharacterSetDescription * inputsPreventingAcceptSelectedCandidate;              //@synthesize inputsPreventingAcceptSelectedCandidate=_inputsPreventingAcceptSelectedCandidate - In the implementation block
@property (nonatomic,copy) TICharacterSetDescription * inputsToReject;                                       //@synthesize inputsToReject=_inputsToReject - In the implementation block
@property (nonatomic,copy) TICharacterSetDescription * terminatorsPreventingAutocorrection;                  //@synthesize terminatorsPreventingAutocorrection=_terminatorsPreventingAutocorrection - In the implementation block
@property (nonatomic,copy) TICharacterSetDescription * terminatorsDeletingAutospace;                         //@synthesize terminatorsDeletingAutospace=_terminatorsDeletingAutospace - In the implementation block
@property (nonatomic,copy) NSString * inputString;                                                           //@synthesize inputString=_inputString - In the implementation block
@property (assign,nonatomic) unsigned long long inputIndex;                                                  //@synthesize inputIndex=_inputIndex - In the implementation block
@property (assign,nonatomic) unsigned long long inputCount;                                                  //@synthesize inputCount=_inputCount - In the implementation block
@property (assign,nonatomic) BOOL nextInputWouldStartSentence; 
@property (assign,nonatomic) BOOL inputStringIsExemptFromChecker; 
@property (assign,nonatomic) BOOL suppressPlaceholderCandidate; 
@property (assign,nonatomic) BOOL supportsNumberKeySelection; 
@property (assign,nonatomic) BOOL usesPunctuationKeysForRowNavigation; 
@property (nonatomic,retain) TIKeyboardCandidate * autocorrectionRecordForInputString;                       //@synthesize autocorrectionRecordForInputString=_autocorrectionRecordForInputString - In the implementation block
@property (nonatomic,copy) NSString * shadowTyping;                                                          //@synthesize shadowTyping=_shadowTyping - In the implementation block
@property (nonatomic,copy) NSString * searchStringForMarkedText;                                             //@synthesize searchStringForMarkedText=_searchStringForMarkedText - In the implementation block
@property (nonatomic,retain) TIKeyEventMap * keyEventMap;                                                    //@synthesize keyEventMap=_keyEventMap - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)inputCount;
-(void)setInputCount:(unsigned long long)arg1 ;
-(BOOL)canHandleKeyHitTest;
-(void)setCanHandleKeyHitTest:(BOOL)arg1 ;
-(BOOL)commitsAcceptedCandidate;
-(void)setCommitsAcceptedCandidate:(BOOL)arg1 ;
-(BOOL)newInputAcceptsUserSelectedCandidate;
-(void)setNewInputAcceptsUserSelectedCandidate:(BOOL)arg1 ;
-(BOOL)ignoresDeadKeys;
-(void)setIgnoresDeadKeys:(BOOL)arg1 ;
-(BOOL)inputStringIsExemptFromChecker;
-(void)setInputStringIsExemptFromChecker:(BOOL)arg1 ;
-(BOOL)nextInputWouldStartSentence;
-(void)setNextInputWouldStartSentence:(BOOL)arg1 ;
-(BOOL)shouldExtendPriorWord;
-(void)setShouldExtendPriorWord:(BOOL)arg1 ;
-(BOOL)suppliesCompletions;
-(void)setSuppliesCompletions:(BOOL)arg1 ;
-(BOOL)supportsNumberKeySelection;
-(BOOL)usesPunctuationKeysForRowNavigation;
-(void)setSupportsNumberKeySelection:(BOOL)arg1 ;
-(void)setUsesPunctuationKeysForRowNavigation:(BOOL)arg1 ;
-(BOOL)supportsSetPhraseBoundary;
-(void)setSupportsSetPhraseBoundary:(BOOL)arg1 ;
-(BOOL)suppressCompletionsForFieldEditor;
-(void)setSuppressCompletionsForFieldEditor:(BOOL)arg1 ;
-(BOOL)usesAutoDeleteWord;
-(void)setUsesAutoDeleteWord:(BOOL)arg1 ;
-(BOOL)usesCandidateSelection;
-(void)setUsesCandidateSelection:(BOOL)arg1 ;
-(BOOL)usesAutocorrectionLists;
-(void)setUsesAutocorrectionLists:(BOOL)arg1 ;
-(BOOL)suppressPlaceholderCandidate;
-(void)setSuppressPlaceholderCandidate:(BOOL)arg1 ;
-(unsigned long long)autoquoteType;
-(void)setAutoquoteType:(unsigned long long)arg1 ;
-(BOOL)usesContinuousPath;
-(void)setUsesContinuousPath:(BOOL)arg1 ;
-(BOOL)usesLiveConversion;
-(void)setUsesLiveConversion:(BOOL)arg1 ;
-(BOOL)delayedCandidateList;
-(void)setDelayedCandidateList:(BOOL)arg1 ;
-(BOOL)usesContinuousPathProgressiveCandidates;
-(void)setUsesContinuousPathProgressiveCandidates:(BOOL)arg1 ;
-(BOOL)insertsSpaceAfterPredictiveInput;
-(void)setInsertsSpaceAfterPredictiveInput:(BOOL)arg1 ;
-(BOOL)shouldFixupIncompleteRomaji;
-(void)setShouldFixupIncompleteRomaji:(BOOL)arg1 ;
-(BOOL)acceptInputString:(id)arg1 ;
-(BOOL)inputStringAcceptsCurrentCandidateIfSelected:(id)arg1 ;
-(BOOL)shouldSuppressAutocorrectionWithTerminator:(id)arg1 ;
-(BOOL)shouldDeleteAutospaceBeforeTerminator:(id)arg1 ;
-(BOOL)stringEndsWord:(id)arg1 ;
-(TIKeyboardCandidate *)autocorrectionRecordForInputString;
-(void)setAutocorrectionRecordForInputString:(TIKeyboardCandidate *)arg1 ;
-(NSString *)wordSeparator;
-(void)setWordSeparator:(NSString *)arg1 ;
-(unsigned long long)inputIndex;
-(void)setInputIndex:(unsigned long long)arg1 ;
-(NSString *)inputString;
-(void)setInputString:(NSString *)arg1 ;
-(TIKeyboardBehaviors *)keyboardBehaviors;
-(void)setKeyboardBehaviors:(TIKeyboardBehaviors *)arg1 ;
-(TIKeyEventMap *)keyEventMap;
-(void)setKeyEventMap:(TIKeyEventMap *)arg1 ;
-(NSString *)replacementForDoubleSpace;
-(void)setReplacementForDoubleSpace:(NSString *)arg1 ;
-(NSString *)shadowTyping;
-(void)setShadowTyping:(NSString *)arg1 ;
-(BOOL)shouldAddModifierSymbolsToWordCharacters;
-(void)setShouldAddModifierSymbolsToWordCharacters:(BOOL)arg1 ;
-(unsigned long long)initialCandidateBatchCount;
-(void)setInitialCandidateBatchCount:(unsigned long long)arg1 ;
-(TICharacterSetDescription *)wordCharacters;
-(void)setWordCharacters:(TICharacterSetDescription *)arg1 ;
-(TICharacterSetDescription *)shortcutCompletions;
-(void)setShortcutCompletions:(TICharacterSetDescription *)arg1 ;
-(TICharacterSetDescription *)inputsPreventingAcceptSelectedCandidate;
-(void)setInputsPreventingAcceptSelectedCandidate:(TICharacterSetDescription *)arg1 ;
-(TICharacterSetDescription *)inputsToReject;
-(void)setInputsToReject:(TICharacterSetDescription *)arg1 ;
-(TICharacterSetDescription *)terminatorsPreventingAutocorrection;
-(void)setTerminatorsPreventingAutocorrection:(TICharacterSetDescription *)arg1 ;
-(TICharacterSetDescription *)terminatorsDeletingAutospace;
-(void)setTerminatorsDeletingAutospace:(TICharacterSetDescription *)arg1 ;
-(NSString *)searchStringForMarkedText;
-(void)setSearchStringForMarkedText:(NSString *)arg1 ;
@end

