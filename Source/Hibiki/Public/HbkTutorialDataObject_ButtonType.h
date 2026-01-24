#pragma once
#include "CoreMinimal.h"
#include "EHbkTutorialBtnWindowType.h"
#include "EHbkTutorialHorizontalWidgetPosType.h"
#include "EHbkTutorialKeyButtonMap.h"
#include "ETngKeyButtonMap.h"
#include "HbkTutorialDataObject.h"
#include "HbkTutorialDataObject_ButtonType.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API UHbkTutorialDataObject_ButtonType : public UHbkTutorialDataObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ETngKeyButtonMap> DisplayKeyList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EHbkTutorialKeyButtonMap> NewDisplayKeyList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkTutorialBtnWindowType WindowSizeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkTutorialHorizontalWidgetPosType WidgetHorizontalPos;
    
    UHbkTutorialDataObject_ButtonType();

};

