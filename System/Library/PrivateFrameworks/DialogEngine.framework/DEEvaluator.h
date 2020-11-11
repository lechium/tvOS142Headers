/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:22 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface DEEvaluator : NSObject {

	NSString* _templateDir;
	NSString* _locale;
	NSString* _typeName;
	NSString* _propName;
	id _parameters;

}

@property (nonatomic,retain) NSString * templateDir;              //@synthesize templateDir=_templateDir - In the implementation block
@property (nonatomic,retain) NSString * locale;                   //@synthesize locale=_locale - In the implementation block
@property (nonatomic,retain) NSString * typeName;                 //@synthesize typeName=_typeName - In the implementation block
@property (nonatomic,retain) NSString * propName;                 //@synthesize propName=_propName - In the implementation block
@property (nonatomic,retain) id parameters;                       //@synthesize parameters=_parameters - In the implementation block
-(void)setLocale:(NSString *)arg1 ;
-(NSString *)locale;
-(id)parameters;
-(NSString *)typeName;
-(void)setParameters:(id)arg1 ;
-(void)setTypeName:(NSString *)arg1 ;
-(id)evaluate;
-(NSString *)propName;
-(void)setPropName:(NSString *)arg1 ;
-(void)setTemplateDir:(NSString *)arg1 ;
-(NSString *)templateDir;
@end
