#pragma once
#include "CoreMinimal.h"
#include "HbkGameNextSeqConfig.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkGameNextSeqConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Comment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NextSeqName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGotoHideOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAfterLoadGotoHideOut;
    
    FHbkGameNextSeqConfig();
};

