/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:06:50 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/Security.framework/Security
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Security/Security-Structs.h>
@class NSData;

@interface CTKClientSEP_SEParameters : NSObject {

	aks_params_sRef _params;
	NSData* _encoded;

}

@property (copy,readonly) NSData * data; 
@property (readonly) const void* bytes; 
@property (readonly) unsigned long long length; 
-(id)init;
-(void)dealloc;
-(unsigned long long)length;
-(const void*)bytes;
-(NSData *)data;
-(void)setData:(id)arg1 forKey:(unsigned)arg2 ;
-(id)initWithParameters:(id)arg1 ;
-(void)setNumber:(long long)arg1 forKey:(unsigned)arg2 ;
@end

