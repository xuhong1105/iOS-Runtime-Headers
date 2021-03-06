/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCFeedGroup : NSObject <FCFeedElement, FCFeedGroupOutlining> {
    FCFeedDescriptor * _L2FeedDescriptor;
    NSDate * _creationDate;
    FCFeedEdition * _edition;
    NSArray * _elements;
    int  _groupType;
    NSArray * _headlines;
    NSString * _identifier;
    BOOL  _isFirstFromEdition;
    unsigned int  _mergeID;
    NSString * _name;
    unsigned int  _options;
    NSString * _sourceIdentifier;
    <FCFeedTheming> * _theme;
}

@property (nonatomic, readonly, copy) FCFeedDescriptor *L2FeedDescriptor;
@property (nonatomic, readonly, copy) NSString *backingTagID;
@property (nonatomic, readonly) BOOL canBeExtended;
@property (nonatomic, readonly) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) FCFeedEdition *edition;
@property (nonatomic, readonly, copy) NSArray *elements;
@property (nonatomic, readonly) int feedElementType;
@property (nonatomic, readonly) int groupType;
@property (nonatomic, readonly) BOOL hasStrictHeadlineOrder;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly, copy) NSArray *headlines;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) BOOL isFirstFromEdition;
@property (nonatomic, readonly) unsigned int mergeID;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) unsigned int options;
@property (nonatomic, readonly, copy) NSString *sourceIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) <FCFeedTheming> *theme;

+ (id)pbGroupFromGroup:(id)arg1 sharedStringIndex:(id)arg2;

- (void).cxx_destruct;
- (id)L2FeedDescriptor;
- (id)backingTagID;
- (BOOL)canBeExtended;
- (id)copyWithEdition:(id)arg1 isFirst:(BOOL)arg2;
- (id)copyWithElements:(id)arg1;
- (id)copyWithMergeID:(unsigned int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (id)description;
- (id)edition;
- (id)elements;
- (int)feedElementType;
- (int)groupType;
- (BOOL)hasStrictHeadlineOrder;
- (unsigned int)hash;
- (id)headlines;
- (id)identifier;
- (id)initWithGroupType:(int)arg1 sourceIdentifier:(id)arg2 name:(id)arg3 theme:(id)arg4 L2FeedDescriptor:(id)arg5 elements:(id)arg6 options:(unsigned int)arg7;
- (id)initWithIdentifier:(id)arg1 groupType:(int)arg2 sourceIdentifier:(id)arg3 creationDate:(id)arg4 name:(id)arg5 theme:(id)arg6 L2FeedDescriptor:(id)arg7 edition:(id)arg8 isFirstFromEdition:(BOOL)arg9 elements:(id)arg10 options:(unsigned int)arg11 mergeID:(unsigned int)arg12;
- (id)initWithIdentifier:(id)arg1 groupType:(int)arg2 sourceIdentifier:(id)arg3 name:(id)arg4 theme:(id)arg5 L2FeedDescriptor:(id)arg6 elements:(id)arg7 options:(unsigned int)arg8;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isFirstFromEdition;
- (BOOL)isGap;
- (unsigned int)mergeID;
- (id)name;
- (unsigned int)options;
- (id)sourceIdentifier;
- (id)theme;

@end
