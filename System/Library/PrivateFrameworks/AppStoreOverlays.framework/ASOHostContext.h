/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:49 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreOverlays.framework/AppStoreOverlays
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/ASOHostProtocol.h>

@class NSString;

@interface ASOHostContext : NSExtensionContext <ASOHostProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(id)serviceContext;
-(void)presentOverlayWithConfiguration:(id)arg1 delegate:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)dismissOverlayWithReply:(/*^block*/id)arg1 ;
@end

