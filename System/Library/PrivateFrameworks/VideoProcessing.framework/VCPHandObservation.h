/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:13 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray;

@interface VCPHandObservation : NSObject {

	int _handID;
	int _revision;
	NSArray* _keypoints;

}

@property (nonatomic,retain) NSArray * keypoints;              //@synthesize keypoints=_keypoints - In the implementation block
@property (assign,nonatomic) int handID;                       //@synthesize handID=_handID - In the implementation block
@property (assign,nonatomic) int revision;                     //@synthesize revision=_revision - In the implementation block
-(void)setRevision:(int)arg1 ;
-(int)revision;
-(NSArray *)keypoints;
-(void)setKeypoints:(NSArray *)arg1 ;
-(int)handID;
-(void)setHandID:(int)arg1 ;
@end

