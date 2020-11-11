/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:21 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AVConference/AVConference-Structs.h>
@class VCVideoFrameBufferPool;

@interface VCEffects : NSObject {

	int _effectsMode;
	VCVideoFrameBufferPool* _bufferPool;
	BOOL _effectsApplied;
	BOOL _faceMeshTrackingEnabled;

}

@property (assign,nonatomic) int effectsMode;                           //@synthesize effectsMode=_effectsMode - In the implementation block
@property (assign,nonatomic) BOOL effectsApplied;                       //@synthesize effectsApplied=_effectsApplied - In the implementation block
@property (assign,nonatomic) BOOL faceMeshTrackingEnabled;              //@synthesize faceMeshTrackingEnabled=_faceMeshTrackingEnabled - In the implementation block
-(id)init;
-(void)dealloc;
-(void)setFaceMeshTrackingEnabled:(BOOL)arg1 ;
-(void)setEffectsApplied:(BOOL)arg1 ;
-(BOOL)faceMeshTrackingEnabled;
-(BOOL)effectsApplied;
-(BOOL)addFrame:(CVBufferRef)arg1 time:(long long)arg2 ;
-(BOOL)releaseFrameWithTime:(long long)arg1 ;
-(void)setEffectsMode:(int)arg1 ;
-(int)effectsMode;
@end

