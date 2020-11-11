/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:22 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <DialogEngine/DialogEngine-Structs.h>
@class NSString;

@interface DEObjectSchema : NSObject {

	ObjectSchema* _This;

}

@property (assign) ObjectSchema* This;                   //@synthesize This=_This - In the implementation block
@property (readonly) NSString * name; 
@property (readonly) NSString * baseObject; 
+(id)schema:(id)arg1 typeName:(id)arg2 ;
-(NSString *)name;
-(id)init;
-(NSString *)baseObject;
-(void)setThis:(ObjectSchema*)arg1 ;
-(ObjectSchema*)This;
-(id)initWithPtr:(ObjectSchema*)arg1 ;
-(id)propertyNames:(id)arg1 ;
-(id)property:(id)arg1 name:(id)arg2 ;
-(id)inputNames:(id)arg1 ;
-(id)input:(id)arg1 name:(id)arg2 ;
@end

