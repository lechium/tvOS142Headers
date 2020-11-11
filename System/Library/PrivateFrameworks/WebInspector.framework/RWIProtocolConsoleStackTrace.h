/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:22 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSArray;

@interface RWIProtocolConsoleStackTrace : RWIProtocolJSONObject

@property (nonatomic,copy) NSArray * callFrames; 
@property (assign,nonatomic) BOOL topCallFrameIsBoundary; 
@property (assign,nonatomic) BOOL truncated; 
@property (nonatomic,retain) RWIProtocolConsoleStackTrace * parentStackTrace; 
-(void)setCallFrames:(NSArray *)arg1 ;
-(id)initWithCallFrames:(id)arg1 ;
-(NSArray *)callFrames;
-(void)setTopCallFrameIsBoundary:(BOOL)arg1 ;
-(BOOL)topCallFrameIsBoundary;
-(void)setTruncated:(BOOL)arg1 ;
-(BOOL)truncated;
-(void)setParentStackTrace:(RWIProtocolConsoleStackTrace *)arg1 ;
-(RWIProtocolConsoleStackTrace *)parentStackTrace;
@end

