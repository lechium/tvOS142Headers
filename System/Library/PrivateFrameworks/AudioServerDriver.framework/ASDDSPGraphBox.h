/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:45 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AudioServerDriver/AudioServerDriver-Structs.h>
@class NSString;

@interface ASDDSPGraphBox : NSObject {

	Box* _box;
	shared_ptr<DSPGraph::Graph>* _graph;

}

@property (nonatomic,readonly) Box* box;                          //@synthesize box=_box - In the implementation block
@property (nonatomic,readonly) long long numInputs; 
@property (nonatomic,readonly) long long numOutputs; 
@property (nonatomic,readonly) NSString * name; 
-(NSString *)name;
-(id)init;
-(long long)numInputs;
-(long long)numOutputs;
-(Box*)box;
-(id)initWithBox:(Box*)arg1 fromGraph:(shared_ptr<DSPGraph::Graph>*)arg2 ;
-(BOOL)startRecordingPort:(long long)arg1 toFile:(id)arg2 ;
-(BOOL)stopRecordingPort:(long long)arg1 ;
-(BOOL)startInjectingPort:(long long)arg1 toFile:(id)arg2 shouldLoop:(BOOL)arg3 ;
-(BOOL)stopInjectingPort:(long long)arg1 ;
-(BOOL)getParameterList:(unsigned*)arg1 numParameterIDs:(long long*)arg2 inScope:(unsigned)arg3 ;
-(BOOL)getParameterInfo:(AudioUnitParameterInfo*)arg1 forID:(unsigned)arg2 inScope:(unsigned)arg3 ;
-(BOOL)getParameter:(float*)arg1 forID:(unsigned)arg2 scope:(unsigned)arg3 element:(unsigned)arg4 ;
-(BOOL)hasParameter:(unsigned)arg1 scope:(unsigned)arg2 element:(unsigned)arg3 ;
-(BOOL)setParameter:(float)arg1 forID:(unsigned)arg2 scope:(unsigned)arg3 element:(unsigned)arg4 bufferOffset:(long long)arg5 ;
@end
