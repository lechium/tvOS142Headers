/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:17 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreHAP/HAP2EncodedResponseThread.h>
#import <libobjc.A.dylib/HAP2EncodedAttributeDatabaseResponse.h>

@class NSDictionary, NSString;

@interface HAP2EncodedAttributeDatabaseResponseThread : HAP2EncodedResponseThread <HAP2EncodedAttributeDatabaseResponse> {

	NSDictionary* _attributeDatabase;

}

@property (nonatomic,readonly) NSDictionary * attributeDatabase;               //@synthesize attributeDatabase=_attributeDatabase - In the implementation block
@property (getter=isEncrypted,nonatomic,readonly) BOOL encrypted; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithBTLEResponse:(id)arg1 attributeDatabase:(id)arg2 ;
-(NSDictionary *)attributeDatabase;
@end

