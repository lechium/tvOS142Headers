/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:39 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/MediaExperience.framework/MediaExperience
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <MediaExperience/MediaExperience-Structs.h>
@class NSObject;

@interface FigRoutingSessionUpdateState : NSObject {

	OpaqueFigRoutingSessionRef _newSession;
	NSObject* _predictionContext;

}

@property (nonatomic,retain) OpaqueFigRoutingSessionRef newSession;              //@synthesize newSession=_newSession - In the implementation block
@property (nonatomic,retain) NSObject * predictionContext;                       //@synthesize predictionContext=_predictionContext - In the implementation block
-(void)dealloc;
-(id)initWithNewSession:(OpaqueFigRoutingSessionRef)arg1 ;
-(OpaqueFigRoutingSessionRef)newSession;
-(void)setNewSession:(OpaqueFigRoutingSessionRef)arg1 ;
-(NSObject *)predictionContext;
-(void)setPredictionContext:(NSObject *)arg1 ;
@end
