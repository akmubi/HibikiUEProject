#pragma once
#include "CoreMinimal.h"
#include "HbkItemObject.h"
#include "HbkItemObj_CollectionFile.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API UHbkItemObj_CollectionFile : public UHbkItemObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FileID;
    
    UHbkItemObj_CollectionFile();

};

