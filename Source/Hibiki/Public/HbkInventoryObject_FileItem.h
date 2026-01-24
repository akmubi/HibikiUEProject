#pragma once
#include "CoreMinimal.h"
#include "EHbkInventoryFileItemCategory.h"
#include "HbkInventoryObject.h"
#include "HbkInventoryObject_FileItem.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class HIBIKI_API UHbkInventoryObject_FileItem : public UHbkInventoryObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkInventoryFileItemCategory FileItemCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* ImageTexture;
    
    UHbkInventoryObject_FileItem();

};

