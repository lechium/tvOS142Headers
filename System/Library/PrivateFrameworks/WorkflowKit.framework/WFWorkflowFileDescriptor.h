/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:23:16 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class WFFileRepresentation, NSString;

@interface WFWorkflowFileDescriptor : NSObject <NSCopying, NSSecureCoding> {

	WFFileRepresentation* _file;
	NSString* _name;
	NSString* _sourceAppIdentifier;

}

@property (nonatomic,readonly) WFFileRepresentation * file;                 //@synthesize file=_file - In the implementation block
@property (nonatomic,readonly) NSString * name;                             //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * sourceAppIdentifier;              //@synthesize sourceAppIdentifier=_sourceAppIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(WFFileRepresentation *)file;
-(NSString *)sourceAppIdentifier;
-(id)initWithFile:(id)arg1 name:(id)arg2 ;
-(id)initWithFile:(id)arg1 name:(id)arg2 sourceAppIdentifier:(id)arg3 ;
@end

