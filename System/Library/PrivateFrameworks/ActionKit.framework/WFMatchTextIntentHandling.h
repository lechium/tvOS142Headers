/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:36 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol WFMatchTextIntentHandling <NSObject>
@optional
-(void)confirmMatchText:(id)arg1 completion:(/*^block*/id)arg2;

@required
-(void)handleMatchText:(id)arg1 completion:(/*^block*/id)arg2;
-(void)resolveTextForMatchText:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)resolvePatternForMatchText:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)resolveCaseSensitiveForMatchText:(id)arg1 withCompletion:(/*^block*/id)arg2;

@end

