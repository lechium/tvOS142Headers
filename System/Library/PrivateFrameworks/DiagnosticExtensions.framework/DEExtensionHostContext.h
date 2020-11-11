/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:00 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensions.framework/DiagnosticExtensions
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/DEExtensionHostProtocol.h>

@class NSString;

@interface DEExtensionHostContext : NSExtensionContext <DEExtensionHostProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(void)attachmentListWithHandler:(/*^block*/id)arg1 ;
-(void)attachmentsForParameters:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)isExtensionEnhancedLoggingStateOnWithHandler:(/*^block*/id)arg1 ;
-(BOOL)hasEntitlement;
-(void)setupForParameters:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)teardownForParameters:(id)arg1 withHandler:(/*^block*/id)arg2 ;
@end
