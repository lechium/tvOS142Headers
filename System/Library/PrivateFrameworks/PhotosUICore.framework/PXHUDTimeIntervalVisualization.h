/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:35 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXHUDVisualization.h>

@class PXTimeInterval;

@interface PXHUDTimeIntervalVisualization : PXHUDVisualization {

	id _stateTransitionHandlerToken;
	PXTimeInterval* _timeInterval;

}

@property (nonatomic,retain) PXTimeInterval * timeInterval;              //@synthesize timeInterval=_timeInterval - In the implementation block
+(id)visualizationWithTimeInterval:(id)arg1 ;
-(PXTimeInterval *)timeInterval;
-(void)setTimeInterval:(PXTimeInterval *)arg1 ;
@end

