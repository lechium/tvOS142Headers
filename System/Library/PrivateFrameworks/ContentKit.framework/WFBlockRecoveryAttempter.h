/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:15 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/WFErrorRecoveryAttempting.h>

@class NSString;

@interface WFBlockRecoveryAttempter : NSObject <WFErrorRecoveryAttempting> {

	/*^block*/id _handlerBlock;

}

@property (nonatomic,copy) id handlerBlock;                         //@synthesize handlerBlock=_handlerBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2 ;
-(id)initWithHandlerBlock:(/*^block*/id)arg1 ;
-(void)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2 userInterface:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)handlerBlock;
-(void)setHandlerBlock:(id)arg1 ;
@end

