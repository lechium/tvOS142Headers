/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:35 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol ENTTransport <NSObject>
@required
-(void)cancel;
-(void)flush;
-(int)readAll:(char*)arg1 offset:(int)arg2 length:(int)arg3;
-(void)write:(const char*)arg1 offset:(unsigned)arg2 length:(unsigned)arg3;

@end

