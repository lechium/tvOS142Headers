/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:32 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SymptomEvaluator/ExpertSystemHandlerCore.h>
#import <libobjc.A.dylib/ManagedEventInfoProtocol.h>

@class NSString;

@interface NoBackhaulHandler : ExpertSystemHandlerCore <ManagedEventInfoProtocol> {

	BOOL _systemForeground;
	BOOL _callInForeground;
	BOOL _dndWhileDriving;
	unsigned _activationIdentifier;
	unsigned long long _stepper;

}

@property (assign,nonatomic) BOOL systemForeground;                      //@synthesize systemForeground=_systemForeground - In the implementation block
@property (assign,nonatomic) BOOL callInForeground;                      //@synthesize callInForeground=_callInForeground - In the implementation block
@property (assign,nonatomic) BOOL dndWhileDriving;                       //@synthesize dndWhileDriving=_dndWhileDriving - In the implementation block
@property (assign,nonatomic) unsigned activationIdentifier;              //@synthesize activationIdentifier=_activationIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long stepper;                 //@synthesize stepper=_stepper - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)configureClass:(id)arg1 ;
+(id)internalStateDictionary;
-(int)configureInstance:(id)arg1 ;
-(int)read:(id)arg1 returnedValues:(id)arg2 ;
-(void)generateInfoForId:(unsigned long long)arg1 context:(const char*)arg2 uuid:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(BOOL)noteSymptom:(id)arg1 ;
-(void)setActivationIdentifier:(unsigned)arg1 ;
-(unsigned)activationIdentifier;
-(unsigned long long)stepper;
-(void)setStepper:(unsigned long long)arg1 ;
-(id)internalStateDictionary;
-(BOOL)systemForeground;
-(void)setSystemForeground:(BOOL)arg1 ;
-(BOOL)callInForeground;
-(void)setCallInForeground:(BOOL)arg1 ;
-(BOOL)dndWhileDriving;
-(void)setDndWhileDriving:(BOOL)arg1 ;
@end

