/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:59 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Intents/INIntentResolutionResult.h>

@interface INPaymentAmountResolutionResult : INIntentResolutionResult
+(id)successWithResolvedPaymentAmount:(id)arg1 ;
+(id)disambiguationWithPaymentAmountsToDisambiguate:(id)arg1 ;
+(id)confirmationRequiredWithPaymentAmountToConfirm:(id)arg1 ;
-(id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2 ;
-(id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2 ;
@end

