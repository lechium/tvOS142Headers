/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:30 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AVFCore/AVFCore-Structs.h>
@class AVPlayerItemOutputInternal;

@interface AVPlayerItemOutput : NSObject {

	AVPlayerItemOutputInternal* _outputInternal;

}

@property (assign,nonatomic) BOOL suppressesPlayerRendering; 
-(id)init;
-(void)dealloc;
-(id)_weakReference;
-(void)setSuppressesPlayerRendering:(BOOL)arg1 ;
-(SCD_Struct_AV6)itemTimeForHostTime:(double)arg1 ;
-(BOOL)suppressesPlayerRendering;
-(BOOL)_attachToPlayerItem:(id)arg1 ;
-(void)_setTimebase:(OpaqueCMTimebaseRef)arg1 ;
-(void)_detachFromPlayerItem;
-(OpaqueCMTimebaseRef)_copyTimebase;
-(SCD_Struct_AV6)_itemTimeForHostTimeAsCMTime:(SCD_Struct_AV6)arg1 ;
-(SCD_Struct_AV6)itemTimeForMachAbsoluteTime:(long long)arg1 ;
@end

