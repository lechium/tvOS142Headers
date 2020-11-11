/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:30 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SiriVOX.framework/SiriVOX
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SVXSpeechSynthesisListening.h>
#import <libobjc.A.dylib/SVXServiceCommandHandling.h>

@protocol SVXPerforming;
@class SVXSpeechSynthesizer, SVXSpeechSynthesisRequest, NSString;

@interface SVXServiceCommandHandlerUIRepeatIt : NSObject <SVXSpeechSynthesisListening, SVXServiceCommandHandling> {

	SVXSpeechSynthesizer* _speechSynthesizer;
	id<SVXPerforming> _performer;
	SVXSpeechSynthesisRequest* _lastStartedRequest;
	NSString* _identifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * identifier;               //@synthesize identifier=_identifier - In the implementation block
+(Class)supportedCommandClass;
-(NSString *)identifier;
-(BOOL)isCommandUUFR:(id)arg1 ;
-(void)handleCommand:(id)arg1 withContext:(id)arg2 taskTracker:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)shouldDependOnCommand:(id)arg1 ;
-(id)initWithSpeechSynthesizer:(id)arg1 performer:(id)arg2 ;
-(void)speechSynthesizerDidBecomeBusy:(id)arg1 ;
-(void)speechSynthesizerDidBecomeIdle:(id)arg1 ;
-(void)speechSynthesizer:(id)arg1 willEnqueueRequest:(id)arg2 taskTracker:(id)arg3 ;
-(void)speechSynthesizer:(id)arg1 willStartRequest:(id)arg2 taskTracker:(id)arg3 ;
-(void)speechSynthesizer:(id)arg1 didStartRequest:(id)arg2 record:(id)arg3 taskTracker:(id)arg4 ;
-(void)speechSynthesizer:(id)arg1 didFinishRequest:(id)arg2 utteranceInfo:(id)arg3 record:(id)arg4 taskTracker:(id)arg5 ;
-(void)speechSynthesizer:(id)arg1 didCancelRequest:(id)arg2 taskTracker:(id)arg3 ;
-(void)speechSynthesizer:(id)arg1 didInterruptRequest:(id)arg2 taskTracker:(id)arg3 ;
-(void)speechSynthesizer:(id)arg1 didFailRequest:(id)arg2 taskTracker:(id)arg3 error:(id)arg4 ;
@end

