/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:17 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SampleAnalysis/SACallTree.h>

@class SAThread, SADispatchQueue;

@interface SAThreadCallTree : SACallTree {

	SAThread* _thread;
	SADispatchQueue* _dispatchQueue;

}

@property (readonly) SAThread * thread;                            //@synthesize thread=_thread - In the implementation block
@property (readonly) SADispatchQueue * dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
-(SADispatchQueue *)dispatchQueue;
-(SAThread *)thread;
@end

