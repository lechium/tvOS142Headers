/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:07 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SNSystemAudioAnalyzerXPCProtocol <NSObject>
@required
-(void)xpcAddRequest:(id)arg1 withObserver:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)xpcRemoveRequest:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)xpcRemoveAllRequestsWithCompletionHandler:(/*^block*/id)arg1;
-(void)xpcStartWithCompletionHandler:(/*^block*/id)arg1;
-(void)xpcStopWithCompletionHandler:(/*^block*/id)arg1;

@end
