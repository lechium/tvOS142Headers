/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:41 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/TextInput/TextInput_el.bundle/TextInput_el
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TextInput_el/TextInput_el-Structs.h>
#import <TextInputCore/TIKeyboardFeatureSpecialization.h>

@interface TIKeyboardFeatureSpecialization_el : TIKeyboardFeatureSpecialization
-(BOOL)shouldAddModifierSymbolsToWordCharacters;
-(BOOL)doesComposeText;
-(id)nonstopPunctuationCharacters;
-(id)sentencePrefixingCharacters;
-(id)sentenceDelimitingCharacters;
-(id)sentenceTrailingCharacters;
-(TIInputManager*)createInputManager;
-(id)externalStringToInternal:(id)arg1 ;
-(id)internalStringToExternal:(id)arg1 ;
@end

