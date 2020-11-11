/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:07:01 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/BSXPCSecureCoding.h>

@class NSString;

@interface SBSUnlockOptions : NSObject <BSXPCCoding, BSXPCSecureCoding> {

	BOOL _aboveOtherContexts;

}

@property (assign,setter=_setAboveOtherContexts:,nonatomic) BOOL _aboveOtherContexts;              //@synthesize aboveOtherContexts=_aboveOtherContexts - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsBSXPCSecureCoding;
-(void)encodeWithBSXPCCoder:(id)arg1 ;
-(id)initWithBSXPCCoder:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(BOOL)_aboveOtherContexts;
-(void)_setAboveOtherContexts:(BOOL)arg1 ;
@end

