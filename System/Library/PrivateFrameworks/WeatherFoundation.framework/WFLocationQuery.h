/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:04 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class WFResponse, WFTaskIdentifier;


@protocol WFLocationQuery <NSObject>
@property (readonly) WFResponse * response; 
@property (retain) WFTaskIdentifier * identifier; 
@required
-(WFTaskIdentifier *)identifier;
-(WFResponse *)response;
-(void)start;
-(void)setIdentifier:(id)arg1;

@end

