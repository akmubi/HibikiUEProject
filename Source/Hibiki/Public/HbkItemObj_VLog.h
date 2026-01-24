#pragma once
#include "CoreMinimal.h"
#include "HbkItemObject.h"
#include "HbkItemObj_VLog.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API UHbkItemObj_VLog : public UHbkItemObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VLogID;
    
    UHbkItemObj_VLog();

};

