/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:06:57 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BaseBoard/BaseBoard-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/BSXPCSecureCoding.h>
#import <libobjc.A.dylib/BSXPCEncoding.h>
#import <libobjc.A.dylib/BSXPCDecoding.h>

@protocol OS_xpc_object;
@class NSObject, NSKeyedArchiver, NSKeyedUnarchiver, NSString;

@interface BSXPCCoder : NSObject <BSDescriptionProviding, BSXPCSecureCoding, BSXPCEncoding, BSXPCDecoding> {

	NSObject*<OS_xpc_object> _message;
	NSObject*<OS_xpc_object> _xpcConnection;
	NSObject*<OS_xpc_object> _codingContext;
	NSKeyedArchiver* _archiver;
	NSKeyedUnarchiver* _unarchiver;
	int _finalized;

}

@property (nonatomic,retain,readonly) NSObject*<OS_xpc_object> message; 
@property (nonatomic,retain,readonly) NSObject*<OS_xpc_object> XPCConnection; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsBSXPCSecureCoding;
+(id)coder;
+(id)coderWithMessage:(id)arg1 ;
-(NSString *)description;
-(id)init;
-(void)dealloc;
-(void)encodeInt64:(long long)arg1 forKey:(id)arg2 ;
-(void)encodeObject:(id)arg1 forKey:(id)arg2 ;
-(void)encodeBool:(BOOL)arg1 forKey:(id)arg2 ;
-(id)decodeObjectOfClass:(Class)arg1 forKey:(id)arg2 ;
-(long long)decodeInt64ForKey:(id)arg1 ;
-(BOOL)containsValueForKey:(id)arg1 ;
-(void)encodeDouble:(double)arg1 forKey:(id)arg2 ;
-(double)decodeDoubleForKey:(id)arg1 ;
-(BOOL)decodeBoolForKey:(id)arg1 ;
-(void)encodeXPCObject:(id)arg1 forKey:(id)arg2 ;
-(id)decodeXPCObjectOfType:(xpc_type_sRef)arg1 forKey:(id)arg2 ;
-(void)encodeWithBSXPCCoder:(id)arg1 ;
-(id)initWithBSXPCCoder:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(NSObject*<OS_xpc_object>)message;
-(id)decodeStringForKey:(id)arg1 ;
-(void)encodeCollection:(id)arg1 forKey:(id)arg2 ;
-(void)encodeCGPoint:(CGPoint)arg1 forKey:(id)arg2 ;
-(void)encodeCGSize:(CGSize)arg1 forKey:(id)arg2 ;
-(void)encodeCGRect:(CGRect)arg1 forKey:(id)arg2 ;
-(void)encodeUInt64:(unsigned long long)arg1 forKey:(id)arg2 ;
-(id)decodeCollectionOfClass:(Class)arg1 containingClass:(Class)arg2 forKey:(id)arg3 ;
-(CGPoint)decodeCGPointForKey:(id)arg1 ;
-(CGSize)decodeCGSizeForKey:(id)arg1 ;
-(CGRect)decodeCGRectForKey:(id)arg1 ;
-(unsigned long long)decodeUInt64ForKey:(id)arg1 ;
-(id)initWithMessage:(id)arg1 ;
-(id)_finishCoding;
-(id)createMessage;
-(NSObject*<OS_xpc_object>)XPCConnection;
-(void)_removeValueForKey:(id)arg1 ;
-(id)_implicitDecodeXPCObjectForKey:(id)arg1 ;
@end

