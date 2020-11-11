/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:42 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/ModuleBase.framework/ModuleBase
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol LAContextServerEvaluationProt
@required
-(void)evaluatePolicy:(long long)arg1 options:(id)arg2 uiDelegate:(id)arg3 originator:(id)arg4 request:(id)arg5 reply:(/*^block*/id)arg6;
-(void)evaluateACL:(id)arg1 operation:(id)arg2 options:(id)arg3 uiDelegate:(id)arg4 originator:(id)arg5 request:(id)arg6 reply:(/*^block*/id)arg7;
-(void)isCredentialSet:(long long)arg1 originator:(id)arg2 reply:(/*^block*/id)arg3;
-(void)setCredential:(id)arg1 type:(long long)arg2 options:(id)arg3 originator:(id)arg4 reply:(/*^block*/id)arg5;
-(void)credentialOfType:(long long)arg1 originator:(id)arg2 reply:(/*^block*/id)arg3;
-(void)checkCredentialSatisfied:(long long)arg1 policy:(long long)arg2 reply:(/*^block*/id)arg3;
-(void)retryEvent:(long long)arg1 originator:(id)arg2 reply:(/*^block*/id)arg3;
-(void)resetEvent:(long long)arg1 originator:(id)arg2 reply:(/*^block*/id)arg3;
-(void)setShowingCoachingHint:(BOOL)arg1 event:(long long)arg2 originator:(id)arg3 reply:(/*^block*/id)arg4;

@end

