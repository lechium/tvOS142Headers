/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:24 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/MediaControlSender.framework/MediaControlSender
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AirPlayControllerSync
@required
-(int)performCommand:(id)arg1 qualifier:(id)arg2 params:(id)arg3 response:(id*)arg4;
-(void)postEvent:(id)arg1 qualifier:(id)arg2 params:(id)arg3;
-(id)getProperty:(id)arg1 qualifier:(id)arg2 status:(int*)arg3;
-(int)setProperty:(id)arg1 qualifier:(id)arg2 value:(id)arg3;

@end
