/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:05 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface FigCaptureMachPortSendRight : NSObject {

	unsigned _port;
	BOOL _invalid;

}

@property (nonatomic,readonly) unsigned port;              //@synthesize port=_port - In the implementation block
-(void)dealloc;
-(void)invalidate;
-(unsigned)port;
-(id)initWithPort:(unsigned)arg1 ;
@end

