/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:55 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol TKProtocolSmartCardSlot <TKProtocolSlot>
@required
-(void)reserveProtocols:(id)arg1 reservationId:(id)arg2 exclusive:(BOOL)arg3 reply:(/*^block*/id)arg4;
-(void)sessionWithParameters:(id)arg1 reply:(/*^block*/id)arg2;
-(void)sendControl:(id)arg1 data:(id)arg2 expectedLength:(unsigned)arg3 reply:(/*^block*/id)arg4;
-(void)getAttrib:(unsigned)arg1 reply:(/*^block*/id)arg2;
-(void)setAttrib:(unsigned)arg1 data:(id)arg2 reply:(/*^block*/id)arg3;
-(void)runUserInteraction:(id)arg1 reply:(/*^block*/id)arg2;

@end
