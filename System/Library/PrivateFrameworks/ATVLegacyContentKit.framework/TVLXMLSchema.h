/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:20 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ATVLegacyContentKit/ATVLegacyContentKit-Structs.h>
@interface TVLXMLSchema : NSObject {

	xmlSchemaRef _schema;

}

@property (assign,nonatomic) xmlSchemaRef schema;              //@synthesize schema=_schema - In the implementation block
-(void)dealloc;
-(xmlSchemaRef)schema;
-(void)setSchema:(xmlSchemaRef)arg1 ;
-(id)initWithSchemaData:(id)arg1 ;
-(BOOL)validateDocument:(id)arg1 error:(id*)arg2 ;
-(BOOL)_validateWithError:(id*)arg1 withBlock:(/*^block*/id)arg2 ;
-(BOOL)validateElement:(id)arg1 error:(id*)arg2 ;
@end

