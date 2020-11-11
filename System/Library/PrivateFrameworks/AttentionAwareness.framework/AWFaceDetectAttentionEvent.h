/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:44 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AttentionAwareness.framework/AttentionAwareness
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AttentionAwareness/AttentionAwareness-Structs.h>
#import <AttentionAwareness/AWAttentionEvent.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface AWFaceDetectAttentionEvent : AWAttentionEvent <NSSecureCoding> {

	BOOL _metadataValid;
	double _pitch;
	double _yaw;
	double _roll;
	unsigned long long _orientation;

}

@property (getter=isMetadataValid,nonatomic,readonly) BOOL metadataValid;              //@synthesize metadataValid=_metadataValid - In the implementation block
@property (nonatomic,readonly) double pitch;                                           //@synthesize pitch=_pitch - In the implementation block
@property (nonatomic,readonly) double yaw;                                             //@synthesize yaw=_yaw - In the implementation block
@property (nonatomic,readonly) double roll;                                            //@synthesize roll=_roll - In the implementation block
@property (nonatomic,readonly) unsigned long long orientation;                         //@synthesize orientation=_orientation - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)orientation;
-(double)pitch;
-(double)yaw;
-(double)roll;
-(void)validateMask;
-(id)initWithTimestamp:(double)arg1 tagIndex:(unsigned long long)arg2 faceMetadata:(AWFaceDetectMetadata*)arg3 ;
-(BOOL)isMetadataValid;
@end

