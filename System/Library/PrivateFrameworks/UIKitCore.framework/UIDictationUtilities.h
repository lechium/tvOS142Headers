/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:27 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <UIKitCore/UIKitCore-Structs.h>
@interface UIDictationUtilities : NSObject
+(id)tokenFromAFToken:(id)arg1 ;
+(id)phraseFromAFPhrase:(id)arg1 ;
+(id)_properNameForString:(id)arg1 ;
+(id)dictationPhrasesFromPhraseArray:(id)arg1 ;
+(BOOL)needsTrailingSpaceForPhrases:(id)arg1 secureInput:(BOOL)arg2 ;
+(BOOL)needsLeadingSpaceForPhrases:(id)arg1 secureInput:(BOOL)arg2 ;
+(BOOL)needsLeadingSpaceForText:(id)arg1 secureInput:(BOOL)arg2 ;
+(id)bestInterpretationForDictationResult:(id)arg1 ;
+(id)interpretationFromAFTokens:(id)arg1 ;
+(id)interpretationFromAFInterpretation:(id)arg1 ;
+(id)dictationPhrasesFromTokenMatrix:(id)arg1 ;
+(id)metadataDictionaryForCorrectionIdentifier:(id)arg1 ;
+(id)bestInterpretationForPhrases:(id)arg1 ;
+(id)attributedStringForDictationResult:(id)arg1 andCorrectionIdentifier:(id)arg2 ;
+(unsigned long long)characterInsertionCount:(id)arg1 ;
+(unsigned long long)characterDeletionCount:(id)arg1 ;
+(unsigned long long)characterSubstitutionCount:(id)arg1 ;
+(unsigned long long)updateCharacterDeletionCount:(id)arg1 delta:(int)arg2 ;
+(unsigned long long)updateCharacterSubstitutionCount:(id)arg1 delta:(int)arg2 ;
+(unsigned long long)updateCharacterInsertionCount:(id)arg1 delta:(int)arg2 ;
+(long long)updateCharacterModificationCount:(id)arg1 delta:(int)arg2 ;
+(void)trackInsertion:(id)arg1 text:(id)arg2 range:(NSRange)arg3 ;
+(void)trackDeletion:(id)arg1 text:(id)arg2 range:(NSRange)arg3 ;
+(void)trackSubstitution:(id)arg1 originalText:(id)arg2 originalTextRange:(NSRange)arg3 replacementText:(id)arg4 replacementTextRange:(NSRange)arg5 ;
+(void)logSpeechAlternativeReplacement:(id)arg1 originalText:(id)arg2 replacementText:(id)arg3 index:(unsigned long long)arg4 ;
+(void)attributedString:(id)arg1 withIdentifiersBlock:(/*^block*/id)arg2 ;
+(unsigned long long)maxLoggableLengthOfInsertionWithoutDeletion:(id)arg1 ;
+(unsigned long long)maxLoggableLengthOfInsertionWithDeletion:(id)arg1 ;
+(unsigned long long)maxLoggableLengthOfInsertionBySubstitution:(id)arg1 ;
@end

