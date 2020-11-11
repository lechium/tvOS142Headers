/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:53 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/InputContext.framework/InputContext
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _ICLexiconManaging
@required
-(void)warmUp;
-(/*^block*/id)addContactObserver:(/*^block*/id)arg1;
-(void)removeContactObserver:(/*^block*/id)arg1;
-(id)loadLexicons:(/*^block*/id)arg1;
-(id)loadLexiconsUsingFilter:(/*^block*/id)arg1;
-(void)unloadLexicons;
-(void)hibernate;
-(void)provideFeedbackForString:(id)arg1 type:(unsigned char)arg2 style:(unsigned char)arg3;

@end

